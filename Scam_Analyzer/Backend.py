print("Starting server...")

from flask import Flask, request, jsonify
from flask_cors import CORS
import requests 
app = Flask(__name__)
CORS(app)


def check_scam(url):
    score = 0

    if len(url) > 50:
        score += 1

    if "@" in url:
        score += 2

    if "-" in url:
        score += 1

    suspicious_words = ["login", "verify", "bank", "secure","offer"]
    for word in suspicious_words:
        if word in url.lower():
            score += 2

    if score >= 3:
        return "Scam"
    elif score == 2:
        return "Suspicious"
    else:
        return "Safe"
        
@app.route("/")
def home():
    return "Backend running"


@app.route("/analyze", methods=["POST"])
def analyze():
    data = request.get_json()
    url = data.get("url")

    API_KEY = "Your API key"

    api_url = "Your API key"

    payload = {
        "client": {
            "clientId": "scam-link-analyzer",
            "clientVersion": "1.0"
        },
        "threatInfo": {
            "threatTypes": ["MALWARE", "SOCIAL_ENGINEERING"],
            "platformTypes": ["ANY_PLATFORM"],
            "threatEntryTypes": ["URL"],
            "threatEntries": [
                {"url": url}
            ]
        }
    }

    try:
        response = requests.post(api_url, json=payload)
        result = response.json()

        # 🔴 If API detects threat → Scam
        if "matches" in result:
            final_result = "Scam"
        else:
            # 🟡 fallback to your logic
            final_result = check_scam(url)

    except:
        final_result = "Error"

    return jsonify({
        "url": url,
        "result": final_result
    })
    

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000, debug=True)    
    
