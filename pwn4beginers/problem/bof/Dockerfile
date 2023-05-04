# 利用するイメージ(?)
FROM ubuntu:22.04

# 必要なライブラリとかをインストール
RUN dpkg --add-architecture i386 && \
    apt-get update && \
    apt-get install -y \
    xinetd \
    libc6-dev \
    libc6-dev:i386 \
    && rm -rf /var/lib/apt/lists/*

RUN useradd -m ctf
WORKDIR /home/ctf

# ファイルをコピー
COPY ./bof /home/ctf/bof
COPY ./flag.txt /home/ctf/flag.txt

# バイナリに実行権限を与える
RUN chmod +x /home/ctf/bof && \
    chown -R root:ctf /home/ctf/bof && \
    chmod 750 /home/ctf/bof && \
    chown root:ctf /home/ctf/flag.txt && \
    chmod 440 /home/ctf/flag.txt

COPY ./ctf.xinetd /etc/xinetd.d/ctf

# ここはポート
EXPOSE 1335

CMD ["/usr/sbin/xinetd", "-dontfork"]

# sudo docker build -t bof .
# sudo docker run -d -p 1335:1335 --name bof_container bof
