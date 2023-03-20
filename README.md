# practice

## vimrc
```vim
au GUIEnter * simalt ~x

set enc=utf-8
set fenc=utf-8
set termencoding=utf-8
set nocompatible
set cindent
set smartindent
set noexpandtab
set tabstop=4     
set shiftwidth=4        
set textwidth=120
set t_Co=256
syntax on
set showmatch
colorscheme default
set background=light
set gfn=Cascadia_Code:h16
set backspace=indent,eol,start
set noundofile
set nobackup       
set nowritebackup  
set noswapfile     
cd C:\Workspace

inoremap {<CR> {<CR>}<Esc>O
inoremap {{ {
inoremap {} {}
autocmd filetype cpp nnoremap <F5> :w <bar> !g++ -std=c++14 % -o %:r -Wl,--stack,268435456<CR>
autocmd filetype cpp nnoremap <F6> :!%:r<CR>
autocmd filetype r nnoremap <F6> :w <bar> !Rscript %:r.r <CR> 
map <F6> :w <bar> !python % <CR>
set nu
augroup numbertoggle
    autocmd!
    autocmd BufEnter,FocusGained,InsertLeave * set rnu
    autocmd BufLeave,FocusLost,InsertEnter * set nornu
augroup END
set laststatus=2
set statusline=\ %{HasPaste()}%F%m%r%h\ %w\ \ CWD:\ %r%{getcwd()}%h\ \ \ Line:\ %l\ \ Column:\ %c
function! HasPaste()
    if &paste
        return 'PASTE MODE  '
    endif
    return ''
endfunction

call plug#begin()


call plug#end()
```