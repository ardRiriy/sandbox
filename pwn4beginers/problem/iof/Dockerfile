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
COPY ./iof /home/ctf/iof

# バイナリに実行権限を与える
RUN chmod +x /home/ctf/iof && \
    chown -R root:ctf /home/ctf/iof && \
    chmod 750 /home/ctf/iof

COPY ./ctf.xinetd /etc/xinetd.d/ctf

# ここはポート
EXPOSE 1337

CMD ["/usr/sbin/xinetd", "-dontfork"]

# sudo docker build -t iof .
# sudo docker run -d -p 1337:1337 --name boi_container iof
