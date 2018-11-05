# ~/.zshrc
(cat ~/.cache/wal/sequences &)
# not running interactively then bail
[[ $- != *i* ]] && return

# shell opts
setopt autocd
setopt completealiases
setopt histignorealldups
setopt histfindnodups
setopt incappendhistory
setopt sharehistory

# colors in less (default PAGER in Arch)
export LESS_TERMCAP_mb=$'\E[01;31m'
export LESS_TERMCAP_md=$'\E[01;31m'
export LESS_TERMCAP_me=$'\E[0m'
export LESS_TERMCAP_se=$'\E[0m'
export LESS_TERMCAP_so=$'\E[01;44;33m'
export LESS_TERMCAP_ue=$'\E[0m'
export LESS_TERMCAP_us=$'\E[01;32m'

# reload ~/.zshrc and compile to .zwc ...  ZDOTDIR see:
# https://wiki.archlinux.org/index.php/zsh#Making_Zsh_your_default_shell
function zsrc() {
    local cache=""
    [[ -n $ZSH_CACHE_DIR ]] && cache=$ZSH_CACHE_DIR || cache="${ZDOTDIR:-$HOME}/.cache"
    autoload -U compinit zrecompile
    compinit -d "$cache/zcomp-$HOST"
    for f in ${ZDOTDIR:-$HOME}/.zshrc "$cache/zcomp-$HOST"; do
        zrecompile -p $f && command rm -f $f.zwc.old
    done
    source ${ZDOTDIR:-$HOME}/.zshrc
}
[[ ! -e ${ZDOTDIR:-$HOME}/.zshrc.zwc ]] && zsrc &>/dev/null

# aliases
alias l='ls'
alias la='ls -A'
alias ll='ls -lA'
alias ls='ls --color=auto'
alias upd='sudo pacman -Syyu'
alias pac='sudo pacman --color auto'
alias merge='xrdb -merge ~/.Xresources'
alias grubup='sudo grub-mkconfig -o /boot/grub/grub.cfg'
alias mirrors='sudo reflector --score 100 --fastest 25 \
    --sort rate --save /etc/pacman.d/mirrorlist --verbose'

al-info


PATH+=:~/.gem/ruby/2.5.0/bin
PATH+=:~/.local/bin
PATH+=:~/.npm/bin
PATH+=:~/go/bin
PATH+=:~/.dotnet/tools

source /usr/share/zsh/share/antigen.zsh
POWERLEVEL9K_INSTALLATION_PATH=$ANTIGEN_BUNDLES/bhilburn/powerlevel9k



antigen use oh-my-zsh
antigen bundles <<EOBUNDLES
    pip
    command-not-found
    archive
    completion
    zshdirectory
    editor                   # Sets key bindings
    nmap
    thefuck
    zsh-users/zsh-history-substring-search
    tarruda/zsh-autosuggestions
    #==== completion
    bil-elmoussaoui/flatpak-zsh-completion
    srijanshetty/zsh-pip-completion
    lukechilds/zsh-better-npm-completion
    felixr/docker-zsh-completion
    ninrod/pass-zsh-completion
    zsh-users/zsh-completions
    #==== git
    unixorn/git-extra-commands
    arialdomartini/oh-my-git
    #=== colors
    zlsun/solarized-man
    joel-porquet/zsh-dircolors-solarized
     zsh-users/zsh-syntax-highlighting
    #zdharma/fast-syntax-highlighting
    #=== other
    MichaelAquilina/zsh-you-should-use
    djui/alias-tips
    #zpm-zsh/autoenv
    unixorn/autoupdate-antigen.zshplugin
    gangleri/pipenv
EOBUNDLES


POWERLEVEL9K_MODE="nerdfont-complete"
DEFAULT_USER='denis'

antigen theme bhilburn/powerlevel9k powerlevel9k

antigen apply


export EDITOR='/usr/bin/nvim'
export VISUAL='/usr/bin/code'
export SUDO_EDITOR='nvim'

