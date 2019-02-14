SEL=$(printf "Suspend\nPower Off\nReboot\nLogout\nSave session\nRestore session" | rofi -dmenu -i -p "Select Power Option")

if [ x"Suspend" = x"${SEL}" ]
then
    systemctl suspend
elif [ x"Power Off" = x"${SEL}" ]
then
    systemctl poweroff
elif [ x"Reboot" = x"${SEL}" ]
then
    systemctl reboot
elif [ x"Logout" = x"${SEL}" ]
then
    i3-msg exit
elif [ x"Save session" = x"${SEL}" ]
then
    ~/session save
elif [ x"Restore session" = x"${SEL}" ]
then
    ~/session restore
fi
