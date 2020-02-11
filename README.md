# Oblivious Dynamic Searchable Encryption (ODSE) Framework

This framework contains the basic implementation of three ODSE schemes described [here](https://content.iospress.com/articles/journal-of-computer-security/jcs191300) and [here](https://link.springer.com/chapter/10.1007/978-3-319-95729-6_8) (free version [here](https://eprint.iacr.org/2017/1158). Each ODSE scheme is implemented individually and separately. This project is built on [CodeLite IDE](http://codelite.org). It is recommended to install CodeLite to load the full ODSE workspaces. 


# Required Libraries

1. [ZeroMQ](http://zeromq.org/intro:get-the-software)
2. [Libtomcrypt](https://github.com/libtom/libtomcrypt)
3. [Google sparsehash](https://github.com/sparsehash/sparsehash)
4. [Intel AES-NI](https://software.intel.com/en-us/articles/download-the-intel-aesni-sample-library) (*optional*)
5. [NTL library v9.10.0](http://www.shoup.net/ntl/download.html) 

# Installation/Configuration/Build/Complile Instructions

Detailed step-by-step instructions regarding building and installation of ODSE schemes is described in their own folder. Please refer to ``README.md`` located in each project folder for more details.



## Citing

If the code is found useful, we would be appreciated if our paper can be cited with the following bibtex format 

```
@article{hoang2019multi,
  title={A Multi-Server Oblivious Dynamic Searchable Encryption Framework},
  author={Hoang, Thang and Yavuz, Attila A and Durak, F Bet{\"u}l and Guajardo, Jorge},
  journal={Journal of Computer Security},
  number={Preprint},
  pages={1--28},
  publisher={IOS Press}
}
```


# Further Information
For any inquiries, bugs, and assistance on building and running the code, please feel free to contact me at  [hoangm@mail.usf.edu](mailto:hoangm@mail.usf.edu?Subject=[ODSE]%20Inquriy).
