# 🖼️ Image Steganography using LSB Technique

*Securely hiding confidential messages inside digital images using Steganography and image processing techniques.*

---

## 📌 Table of Contents

* <a href="#overview">Overview</a>
* <a href="#problem-statement">Problem Statement</a>
* <a href="#input">Input</a>
* <a href="#tools--technologies">Tools & Technologies</a>
* <a href="#project-structure">Project Structure</a>
* <a href="#methodology">Methodology</a>
* <a href="#dashboard">Dashboard</a>
* <a href="#features">Key Features</a>
* <a href="#applications">Applications</a>
* <a href="#how-to-run-this-project">How to Run This Project</a>
* <a href="#future-enhancements">Future Enhancements</a>
* <a href="#author--contact">Author & Contact</a>

---

<h2><a class="anchor" id="overview"></a>Overview</h2>

Image Steganography is a technique used to hide secret information within digital images without visibly altering the image. This project implements the **Least Significant Bit (LSB)** method to embed and extract hidden messages securely while maintaining high image quality.

---

<h2><a class="anchor" id="problem-statement"></a>Problem Statement</h2>

Secure communication is essential in modern digital environments. Encryption alone may attract attention, whereas steganography conceals the existence of the message itself.

This project aims to:

* Embed secret messages inside images
* Maintain image quality after embedding
* Enable accurate message retrieval
* Provide covert communication methods

---

<h2><a class="anchor" id="input"></a>Input</h2>

* **Input Image Formats:** PNG, JPG
* **Message Type:** Text
* **Output:** Encoded Image

---

<h2><a class="anchor" id="tools--technologies"></a>Tools & Technologies</h2>

* Programming Language: Python
* Libraries: OpenCV, NumPy, PIL
* Interface: Web UI / Streamlit
* Platform: Windows / Linux

---

<h2><a class="anchor" id="project-structure"></a>Project Structure</h2>

```
Image-Steganography/
│
├── encode.py
├── decode.py
├── app.py
├── input_image.png
├── output_image.png
└── README.md
```

---

<h2><a class="anchor" id="methodology"></a>Methodology</h2>

* Load image
* Convert message into binary
* Embed using LSB technique
* Save encoded image
* Decode by extracting pixel LSB values

---

<h2><a class="anchor" id="dashboard"></a>Dashboard</h2>
![Image Steganography video - frame at 0m12s](https://github.com/user-attachments/assets/c2c603c9-109f-49b7-b8aa-3aea51560206)


The project includes an interactive web dashboard that enables users to:

* Upload original images for encoding
* Enter secret text messages
* Encode messages securely into images
* Upload encoded images for decoding
* Extract hidden messages easily


> Add screenshot here:

```
![Dashboard Screenshot](dashboard.png)
```

---

<h2><a class="anchor" id="features"></a>Key Features</h2>

* Secure LSB message embedding
* Minimal image distortion
* Interactive dashboard interface
* Supports multiple image formats
* Accurate decoding

---

<h2><a class="anchor" id="applications"></a>Applications</h2>

* Secure communication
* Digital watermarking
* Military data transfer
* Confidential information storage
* Copyright protection

---

<h2><a class="anchor" id="how-to-run-this-project"></a>How to Run This Project</h2>

1. Clone repository

```
git clone https://github.com/yourusername/Image-Steganography.git
cd Image-Steganography
```

2. Install dependencies

```
pip install streamlit opencv-python numpy pillow
```

3. Run dashboard

```
streamlit run app.py
```

---

<h2><a class="anchor" id="future-enhancements"></a>Future Enhancements</h2>

* AES / RSA encryption integration
* Audio & video steganography
* Cloud deployment
* Advanced steganalysis resistance
* AI-based secure embedding

---

<h2><a class="anchor" id="author--contact"></a>Author & Contact</h2>

**Chandan**
Final Year BE Student
Aspiring AI/ML Engineer & Data Scientist
📧 [chandan20041220@gmail.com](mailto:chandan20041220@gmail.com)
🔗 https://github.com/Chandan-D-C

---
