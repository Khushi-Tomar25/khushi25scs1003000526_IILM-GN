<!DOCTYPE html>
<html>
<head>
  <title>Scam Link Analyzer</title>
  <style>
    body {
      font-family: Arial;
      text-align: center;
      background: #0f172a;
      color: white;
      margin-top: 100px;
    }

    input {
      padding: 12px;
      width: 300px;
      border-radius: 5px;
      border: none;
    }

    button {
      padding: 12px;
      background: #22c55e;
      color: white;
      border: none;
      border-radius: 5px;
      cursor: pointer;
    }

    #result {
      margin-top: 20px;
      font-size: 20px;
    }
  </style>
</head>

<body>

  <h1>🔍 Scam Link Analyzer</h1>

  <input type="text" id="urlInput" placeholder="Enter URL here">
  <br><br>
  <button onclick="analyzeURL()">Analyze</button>

  <div id="result"></div>

  <script>
    async function analyzeURL() {
      const url = document.getElementById("urlInput").value;
      const resultDiv = document.getElementById("result");

      if (url === "") {
        resultDiv.innerText = "❗ Please enter a URL";
        return;
      }

      resultDiv.innerText = "⏳ Checking...";

      try {
        const response = await fetch("http://10.183.224.113:5000/analyze",{
          method: "POST",
          headers: {
            "Content-Type": "application/json"
          },
          body: JSON.stringify({ url: url })
        });

        const data = await response.json();

        if (data.result === "Scam") {
          resultDiv.innerText = "❌ Scam Link";
          resultDiv.style.color = "red";
        } 
        else if (data.result === "Suspicious") {
          resultDiv.innerText = "⚠️ Suspicious Link";
          resultDiv.style.color = "orange";
        } 
        else {
          resultDiv.innerText = "✅ Safe Link";
          resultDiv.style.color = "green";
        }

      } catch (error) {
        resultDiv.innerText = "⚠️ Error connecting to server";
        resultDiv.style.color = "yellow";
      }
    }
  </script>


</body>
</html>