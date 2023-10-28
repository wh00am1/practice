set enc=utf-8
set fenc=utf-8
set termencoding=utf-8
set nocompatible
set background=dark
set cindent
set smartindent
set noexpandtab
set tabstop=4     
set shiftwidth=4        
set textwidth=120
set t_Co=256
syntax on
set showmatch
set backspace=indent,eol,start
set noundofile
set nobackup       
set nowritebackup  
set noswapfile     
set cursorline
set cursorcolumn

inoremap {<CR> {<CR>}<Esc>O
inoremap {{ {
inoremap {} {}
autocmd filetype c nnoremap <F5> :w <bar> !gcc % -o %:r -Wall -g<CR>
autocmd filetype c nnoremap <F6> :w <bar> !./%:r<CR>
autocmd filetype cpp nnoremap <F5> :w <bar> !g++ -std=c++14 % -o %:r -Wall -g<CR>
autocmd filetype cpp nnoremap <F6> :!./%:r<CR>
autocmd filetype python nnoremap <F6> :w <bar> !python %<CR>
autocmd filetype php nnoremap <F6> :!w <bar> php %<CR>

set nu
augroup numbertoggle
    autocmd!
    autocmd BufEnter,FocusGained,InsertLeave * set rnu
    autocmd BufLeave,FocusLost,InsertEnter * set nornu
augroup END
set laststatus=2
function! HasPaste()
    if &paste
        return 'PASTE MODE  '
    endif
    return ''
endfunction

call plug#begin()
Plug 'iamcco/markdown-preview.nvim', { 'do': { -> mkdp#util#install() }, 'for': ['markdown', 'vim-plug']}
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
Plug 'preservim/nerdtree'
call plug#end()

nnoremap <C-t> :NERDTreeToggle<CR>
let g:cpp_attributes_highlight = 1
let g:cpp_member_highlight = 1
let g:cpp_simple_highlight = 1
let g:airline_powerline_fonts = 1
let g:airline_theme='dark'
