import whisper

model = whisper.load_model('large')
result = model.transcribe('./心理学2.mp3', fp16=False)

print(result["text"])
