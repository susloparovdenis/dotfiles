export PEARL_ROOT=/home/denis/.local/share/pearl
source /home/denis/.local/share/pearl/boot/sh/pearl.sh
if [ $TILIX_ID ] || [ $VTE_VERSION ]; then
        source /etc/profile.d/vte.sh
fi

zstyle :compinstall filename '/home/denis/.zshrc'
autoload -Uz compinit promptinit
compinit
promptinit

zstyle ':completion:*' rehash true
zstyle ':completion:*' menu select
autoload -Uz compinit
compinit
# End of lines added by compinstall


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
POWERLEVEL9K_MULTILINE_FIRST_PROMPT_PREFIX="↱"
POWERLEVEL9K_MULTILINE_LAST_PROMPT_PREFIX="↳ "
POWERLEVEL9K_LEFT_PROMPT_ELEMENTS=(dir newline vcs)
DEFAULT_USER='denis'

antigen theme bhilburn/powerlevel9k powerlevel9k

antigen apply


export EDITOR='/usr/bin/nvim'
export VISUAL='/usr/bin/code'
export SUDO_EDITOR='nvim'

export MAKEFLAGS="-j $(grep -c ^processor /proc/cpuinfo)"



alias ll="exa -l --git --group-directories-first"
alias l="exa -la --git --time-style=long-iso --group-directories-first"
alias la="exa -lahg --git --time-style=long-iso --group-directories-first"
alias suroot='sudo -E -s'
alias sucode='sudo code --user-data-dir ~denis'
alias pacman_last_installed=expac --timefmt='%F %T' '%l %n' | sort -n
alias pacman_last_installed="expac --timefmt='%F %T' '%l %n' | sort -n"

# alias ls='colorls'
# alias ll='colorls -l'
# alias la='colorls -lA'

# autoload -U +X compinit && compinit
# autoload -U +X bashcompinit && bashcompinit

alias cb=clipboard

# zsh parameter completion for the dotnet CLI

_dotnet_zsh_complete() 
{
  local completions=("$(dotnet complete "$words")")

  reply=( "${(ps:
:)completions}" )
}

compctl -K _dotnet_zsh_complete dotnet

alias dotnet='TERM=xterm dotnet'
alias zrc='code ~/.zshrc'


# Allow aproximation when completing
zstyle ':completion:::::' completer _complete _approximate
zstyle ':completion:*:approximate:*' max-errors 2
