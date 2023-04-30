import whisper

model = whisper.load_model('small')
result = model.transcribe('test.mp3')

print(result["text"])
