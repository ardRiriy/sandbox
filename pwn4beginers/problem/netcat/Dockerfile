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
COPY ./echo.sh /home/ctf/echo.sh

# バイナリに実行権限を与える
RUN chmod +x /home/ctf/echo.sh && \
    chown -R root:ctf /home/ctf/echo.sh && \
    chmod 750 /home/ctf/echo.sh


COPY ./ctf.xinetd /etc/xinetd.d/ctf

# ここはポート
EXPOSE 1300

CMD ["/usr/sbin/xinetd", "-dontfork"]

# sudo docker build -t echo .
# sudo docker run -d -p 1300:1300 --name echo_container echo
