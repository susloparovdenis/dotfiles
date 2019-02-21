[[ $(pidof polybar) ]] && pkill polybar
for m in $(xrandr --query | grep " connected" | cut -d" " -f1); do
  MONITOR=$m polybar i3-bar &
done
