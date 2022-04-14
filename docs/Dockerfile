FROM ruby:3
WORKDIR /docs
COPY Gemfile /docs/
RUN apt-get update
RUN apt-get -y install rsync default-jre graphviz gnuplot zip
RUN bundle install
RUN curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh -s -- -y
RUN ~/.cargo/bin/cargo install svgbob_cli
ENV PATH="~/.cargo/bin:${PATH}"
RUN ln -s ~/.cargo/bin/svgbob_cli /usr/bin/svgbob
