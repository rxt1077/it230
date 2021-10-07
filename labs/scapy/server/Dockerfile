FROM panubo/sshd
ENV SSH_ENABLE_ROOT=true
ENV SSH_ENABLE_ROOT_PASSWORD_AUTH=true
COPY motd /etc/motd
COPY changepw.sh /etc/entrypoint.d/
