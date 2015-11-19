FROM debian:jessie
MAINTAINER neil.houston <neil.a.houston@gmail.com>
ADD ./putpenis /putpenis
ADD ./run /fuck
CMD ["/fuck", "matt", "houston"]
