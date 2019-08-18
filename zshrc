source /usr/share/zsh/share/antigen.zsh
antigen use oh-my-zsh

DEFAULT_USER='denis'
EDITOR='/usr/bin/nvim'
VISUAL='code.exe'
SUDO_EDITOR='nvim'

setxkbmap -model pc105 -layout us,ru -variant euro, -option  grp:shift_caps_switch grp:alt_space_toggle numpad:microsoft eurosign:5 terminate:ctrl_alt_bksp grp:shift_caps_toggle caps:escape 

autoload -Uz chpwd_recent_dirs cdr add-zsh-hook
add-zsh-hook chpwd chpwd_recent_dirs

PATH+=:~/.gem/ruby/2.5.0/bin
PATH+=:~/.local/bin
PATH+=:~/.npm/packages/bin
PATH+=:~/.npm/bin
PATH+=:~/go/bin
PATH+=:~/bin
PATH+=:~/.local/go/bin
PATH+=:~/.dotnet/tools
export PATH="${KREW_ROOT:-$HOME/.krew}/bin:$PATH"
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
    common-aliases
    compleat 
    copyfile # Copies content of a file into clipboard 
    django
    fasd # z-like tools
    gitfast
    git-extras
    httpie
    npm
    vscode

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
    MikeDacre/careful_rm
    wfxr/forgit
    zlsun/solarized-man
    joel-porquet/zsh-dircolors-solarized
    MichaelAquilina/zsh-you-should-use
    djui/alias-tips
    unixorn/autoupdate-antigen.zshplugin
    fzf
    Vifon/deer
    leophys/zsh-plugin-fzf-finder
    ytet5uy4/fzf-widgets
    wfxr/formarks
    changyuheng/fz
    zsh-users/zaw
    aperezdc/zsh-fzy
    dotenv
    zsh-users/zsh-syntax-highlighting
    lukechilds/zsh-nvm
EOBUNDLES


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
#alias cat='bat'
autoload -Uz compinit && compinit -i
autoload -Uz promptinit
promptinit
# prompt spaceship

autoload -U +X bashcompinit && bashcompinit


source /opt/google-cloud-sdk/completion.zsh.inc          
source /opt/google-cloud-sdk/path.zsh.inc                                        
[ -f $HOME/.config/wpg/sequences ] && (cat $HOME/.config/wpg/sequences &)



# if zplug check 'ytet5uy4/fzf-widgets'; then
  # Map widgets to key
  bindkey '^@'  fzf-select-widget
  bindkey '^@.' fzf-edit-dotfiles
  bindkey '^@c' fzf-change-directory
  bindkey '^@n' fzf-change-named-directory
  bindkey '^@f' fzf-edit-files
  bindkey '^@k' fzf-kill-processes
  bindkey '^@s' fzf-exec-ssh
  bindkey '^\'  fzf-change-recent-directory
  bindkey '^r'  fzf-insert-history
  bindkey '^xf' fzf-insert-files
  bindkey '^xd' fzf-insert-directory
  bindkey '^xn' fzf-insert-named-directory

  ## Git
  bindkey '^@g'  fzf-select-git-widget
  bindkey '^@ga' fzf-git-add-files
  bindkey '^@gc' fzf-git-change-repository

  # GitHub
  bindkey '^@h'  fzf-select-github-widget
  bindkey '^@hs' fzf-github-show-issue
  bindkey '^@hc' fzf-github-close-issue

  ## Docker
  bindkey '^@d'  fzf-select-docker-widget
  bindkey '^@dc' fzf-docker-remove-containers
  bindkey '^@di' fzf-docker-remove-images
  bindkey '^@dv' fzf-docker-remove-volumes

  # Enable Exact-match by fzf-insert-history
  FZF_WIDGET_OPTS[insert-history]='--exact'

  # Start fzf in a tmux pane
  FZF_WIDGET_TMUX=1
# fi
TRAPWINCH() {
  zle && { zle reset-prompt; zle -R }
}
#neofetch
alias copy='xsel -ib'
#bindkey -v
[[ -r "/usr/share/z/z.sh" ]] && source /usr/share/z/z.sh
 eval "$(fasd --init auto)"
