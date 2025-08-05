git -c color.status=false status -s --ignored \
| sed -n 's/^!! //p' \
| awk '{ gsub(/\/+$/,""); n=split($0,a,"/"); print a[n] }'

