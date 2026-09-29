# 🔄 42_push_swap

An algorithmic sorting project developed for the 42 School curriculum. The objective of `push_swap` is to sort data on a stack with a limited set of instructions, using the lowest possible number of actions. This project focuses on algorithm optimization, complexity analysis (Big O notation), and efficient memory management in C.

## 📊 Repository Structure

The project is written entirely in C (92.7%) and automated using a Makefile (7.3%). The source code is modularized to separate core operations from the sorting algorithms:

*   **`Makefile`**: Automates the compilation of the executable.
*   **`header.h`**: The central header file containing necessary struct definitions and function prototypes.
*   **Operations**: 
    *   `push.c` (`pa`, `pb`)
    *   `swap.c` (`sa`, `sb`, `ss`)
    *   `rotate.c` (`ra`, `rb`, `rr`)
    *   `reverserotate.c` (`rra`, `rrb`, `rrr`)
*   **Sorting Algorithms**:
    *   `sort_small.c`: Hardcoded, highly optimized logic for small datasets (e.g., 3 to 5 numbers).
    *   `sort_big.c`: The primary sorting algorithm (often Radix or a specialized chunking algorithm) designed to handle large datasets (100 to 500+ numbers) with maximum efficiency.
*   **Core Logic**:
    *   `index.c`: Handles pre-indexing of the data to simplify the sorting logic for large stacks.
    *   `utils.c`: Helper functions for parsing input, handling memory, and checking for duplicates or errors.

## 🚀 Getting Started

### Prerequisites
*   GCC compiler
*   Make

### Installation & Compilation

1. Clone the repository:
   ```bash
   git clone [https://github.com/Arkarchanmyae123/42_push_swap.git](https://github.com/Arkarchanmyae123/42_push_swap.git)
   cd 42_push_swap

# Burmese 

# 🔄 42_push_swap

42 School သင်ရိုးညွှန်းတမ်းအတွက် ရေးသားထားတဲ့ Algorithm အသုံးပြု Sorting ပရောဂျက်တစ်ခု ဖြစ်ပါတယ်။ `push_swap` ရဲ့ အဓိက ရည်ရွယ်ချက်ကတော့ ကန့်သတ်ထားတဲ့ ညွှန်ကြားချက် (Instructions) တွေကို သုံးပြီး Stack ပေါ်က ဒေတာတွေကို အနည်းဆုံး လုပ်ဆောင်ချက် အရေအတွက်နဲ့ အစီအစဉ်ကျအောင် (Sort) စီပေးဖို့ ဖြစ်ပါတယ်။ ဒီပရောဂျက်က Algorithm ပိုမိုကောင်းမွန်အောင် ပြုပြင်ခြင်း (Optimization)၊ Complexity ခွဲခြမ်းစိတ်ဖြာခြင်း (Big O notation) နဲ့ C language မှာ Memory ကို ထိထိရောက်ရောက် စီမံခန့်ခွဲခြင်းတွေအပေါ် အဓိက အာရုံစိုက်ထားပါတယ်။

## 📊 Repository ဖွဲ့စည်းပုံ

ဒီပရောဂျက်ကို C language (92.7%) နဲ့ အပြည့်အဝ ရေးသားထားပြီး Makefile (7.3%) ကို အသုံးပြုကာ Compilation ကို အလိုအလျောက် လုပ်ဆောင်ပေးထားပါတယ်။ Core operations တွေနဲ့ Sorting algorithms တွေကို သီးခြားစီ ခွဲခြားပြီး (Modularized) ရေးသားထားပါတယ်-

*   **`Makefile`**: Executable ဖိုင်ကို အလိုအလျောက် Compile လုပ်ပေးပါတယ်။
*   **`header.h`**: လိုအပ်တဲ့ Struct definitions တွေနဲ့ Function prototypes တွေ ပါဝင်တဲ့ အဓိက Header ဖိုင် ဖြစ်ပါတယ်။
*   **Operations** (လုပ်ဆောင်ချက်များ): 
    *   `push.c` (`pa`, `pb`)
    *   `swap.c` (`sa`, `sb`, `ss`)
    *   `rotate.c` (`ra`, `rb`, `rr`)
    *   `reverserotate.c` (`rra`, `rrb`, `rrr`)
*   **Sorting Algorithms** (အစီအစဉ်ကျစေသော အယ်လဂိုရီသမ်များ):
    *   `sort_small.c`: ကိန်းဂဏန်း ၃ ခုမှ ၅ ခုအထိ နည်းပါးတဲ့ ဒေတာတွေအတွက် အထူးကောင်းမွန်အောင် ရေးသားထားတဲ့ Logic ဖြစ်ပါတယ်။
    *   `sort_big.c`: ကိန်းဂဏန်း ၁၀၀ မှ ၅၀၀ ကျော်အထိ များပြားတဲ့ ဒေတာတွေကို အမြန်ဆန်ဆုံး ဖြေရှင်းပေးနိုင်ဖို့ ဖန်တီးထားတဲ့ အဓိက Sorting Algorithm (များသောအားဖြင့် Radix သို့မဟုတ် Specialized chunking algorithm) ဖြစ်ပါတယ်။
*   **Core Logic** (အခြေခံ လုပ်ဆောင်ချက်များ):
    *   `index.c`: ကြီးမားတဲ့ Stack တွေအတွက် Sorting Logic ကို ပိုမိုရိုးရှင်းသွားစေရန် ဒေတာတွေကို ကြိုတင် Index သတ်မှတ်ပေးပါတယ်။
    *   `utils.c`: Input တွေကို စစ်ဆေးခြင်း၊ Memory စီမံခြင်း၊ တူညီနေတဲ့ ဂဏန်းတွေနဲ့ Error တွေကို စစ်ဆေးခြင်း စတဲ့ အထောက်အကူပြု Function များ ပါဝင်ပါတယ်။

## 🚀 စတင်အသုံးပြုခြင်း

### လိုအပ်ချက်များ (Prerequisites)
*   GCC compiler
*   Make

### ထည့်သွင်းခြင်းနှင့် Compile လုပ်ခြင်း (Installation & Compilation)

1. Repository ကို Clone လုပ်ရန်-
   ```bash
   git clone [https://github.com/Arkarchanmyae123/42_push_swap.git](https://github.com/Arkarchanmyae123/42_push_swap.git)
   cd 42_push_swap
