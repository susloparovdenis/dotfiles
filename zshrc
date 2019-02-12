source /usr/share/zsh/share/antigen.zsh
antigen use oh-my-zsh

DEFAULT_USER='denis'
EDITOR='/usr/bin/nvim'
VISUAL='code.exe'
SUDO_EDITOR='nvim'

PATH+=:~/.gem/ruby/2.5.0/bin
PATH+=:~/.local/bin
PATH+=:~/.npm/bin
PATH+=:~/go/bin
PATH+=:~/.dotnet/tools

export FZF_BASE=/usr/share/fzf/
antigen bundles <<EOBUNDLES
    adrieankhisbe/zsh-quiet-accept-line
    pip
    command-not-found
    archive
    completion
    zshdirectory
    editor              
    nmap
    thefuck
    systemd
    docker
    kubectl
    docker-compose
    git
    fzf
    Tarrasch/zsh-functional
    zsh-users/zsh-history-substring-search
    tarruda/zsh-autosuggestions
    
    bil-elmoussaoui/flatpak-zsh-completion
    srijanshetty/zsh-pip-completion
    lukechilds/zsh-better-npm-completion
    ninrod/pass-zsh-completion
    zsh-users/zsh-completions
    
    unixorn/git-extra-commands
    arialdomartini/oh-my-git
    
    zlsun/solarized-man
    joel-porquet/zsh-dircolors-solarized
     zsh-users/zsh-syntax-highlighting

    leophys/zsh-plugin-fzf-finder
    MichaelAquilina/zsh-you-should-use
    djui/alias-tips
    #zpm-zsh/autoenv
    unixorn/autoupdate-antigen.zshplugin
    gangleri/pipenv
EOBUNDLES

# ZSH_THEME="powerlevel9k/powerlevel9k"
POWERLEVEL9K_MODE='nerdont-complete'
POWERLEVEL9K_PROMPT_ON_NEWLINE=true
POWERLEVEL9K_PROMPT_ADD_NEWLINE=false
POWERLEVEL9K_RPROMPT_ON_NEWLINE=true
POWERLEVEL9K_SHORTEN_DIR_LENGTH=2
POWERLEVEL9K_SHORTEN_STRATEGY="truncate_beginning"
POWERLEVEL9K_RVM_BACKGROUND="black"
POWERLEVEL9K_RVM_FOREGROUND="249"
POWERLEVEL9K_RVM_VISUAL_IDENTIFIER_COLOR="red"
POWERLEVEL9K_TIME_BACKGROUND="black"
POWERLEVEL9K_TIME_FOREGROUND="white"
POWERLEVEL9K_TIME_FORMAT="\UF43A %D{%I:%M  \UF133  %m.%d.%y}"
POWERLEVEL9K_RVM_BACKGROUND="black"
POWERLEVEL9K_RVM_FOREGROUND="249"
POWERLEVEL9K_RVM_VISUAL_IDENTIFIER_COLOR="red"
POWERLEVEL9K_STATUS_VERBOSE=false
POWERLEVEL9K_VCS_CLEAN_FOREGROUND='black'
POWERLEVEL9K_VCS_CLEAN_BACKGROUND='green'
POWERLEVEL9K_VCS_UNTRACKED_FOREGROUND='black'
POWERLEVEL9K_VCS_UNTRACKED_BACKGROUND='orange'
POWERLEVEL9K_VCS_MODIFIED_FOREGROUND='black'
POWERLEVEL9K_VCS_MODIFIED_BACKGROUND='yellow'
POWERLEVEL9K_VCS_HIDE_TAGS='false'
POWERLEVEL9K_COMMAND_EXECUTION_TIME_BACKGROUND='black'
POWERLEVEL9K_COMMAND_EXECUTION_TIME_FOREGROUND='white'
POWERLEVEL9K_FOLDER_ICON=''
POWERLEVEL9K_STATUS_OK_IN_NON_VERBOSE=true
POWERLEVEL9K_STATUS_VERBOSE=false
POWERLEVEL9K_COMMAND_EXECUTION_TIME_THRESHOLD=0
POWERLEVEL9K_VCS_UNTRACKED_ICON='\u25CF'
POWERLEVEL9K_VCS_UNSTAGED_ICON='\u00b1'
POWERLEVEL9K_VCS_INCOMING_CHANGES_ICON='\u2193'
POWERLEVEL9K_VCS_OUTGOING_CHANGES_ICON='\u2191'
POWERLEVEL9K_VCS_COMMIT_ICON="\uf417"
POWERLEVEL9K_MULTILINE_FIRST_PROMPT_PREFIX="%F{blue}\u256D\u2500%f"
POWERLEVEL9K_MULTILINE_LAST_PROMPT_PREFIX="%F{blue}\u2570\uf460%f "
POWERLEVEL9K_CUSTOM_BATTERY_STATUS="prompt_zsh_battery_level"
POWERLEVEL9K_CUSTOM_BATTERY_STATUS_BACKGROUND='blue'
POWERLEVEL9K_CUSTOM_BATTERY_STATUS_BACKGROUND='black'
#POWERLEVEL9K_LEFT_PROMPT_ELEMENTS=(codetalk context custom_internet_signal  ssh root_indicator dir dir_writable vcs)
POWERLEVEL9K_LEFT_PROMPT_ELEMENTS=(os_icon context custom_internet_signal  ssh root_indicator dir dir_writable vcs)
POWERLEVEL9K_RIGHT_PROMPT_ELEMENTS=(command_execution_time  status   time)
HIST_STAMPS="dd/mm/yyyy"
# DISABLE_UPDATE_PROMPT=true
POWERLEVEL9K_CONTEXT_DEFAULT_BACKGROUND='black'
POWERLEVEL9K_CONTEXT_DEFAULT_FOREGROUND='purple'

POWERLINE9K_CODETALK_DEFAULT_BACKGROUND='black'
POWERLINE9K_CODETALK_DEFAULT_FOREGROUND='red'

# antigen theme bhilburn/powerlevel9k powerlevel9k
antigen theme https://github.com/denysdovhan/spaceship-prompt spaceship
antigen apply

alias vim=nvim
alias ls='lsd'
alias l='ls -l'
alias ll='ls -l'
alias la='ls -a'
alias lla='ls -la'
alias lt='ls --tree'

autoload -Uz compinit && compinit -i
autoload -Uz promptinit
promptinit
prompt spaceship



[[ -r "/usr/share/z/z.sh" ]] && source /usr/share/z/z.sh

neofetch

export VSS_NUGET_EXTERNAL_FEED_ENDPOINTS='{"endpointCredentials": [{"endpoint":"https://pkgs.dev.azure.com/payvision-amsterdam/_packaging/tlm/nuget/v3/index.json", "username":"optional", "password":"3jiucrokdvjbrbzfr622ia4tdr26lxuw6nfz72fehgsfu4ljiiua"}]}'
export NUGET_CREDENTIALPROVIDER_SESSIONTOKENCACHE_ENABLED=true

source /opt/google-cloud-sdk/completion.zsh.inc          
source /opt/google-cloud-sdk/path.zsh.inc                                        
# (cat $HOME/.config/wpg/sequences &)