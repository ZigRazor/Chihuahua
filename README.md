# Chihuahua

<img style="float: right;" align="left" src="https://images.unsplash.com/photo-1607386176712-d8baeb6178a7" width="200">

C++ unique identifier utilities

[![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE) [![GitHub release](https://img.shields.io/github/release/ZigRazor/Chihuahua.svg)](https://GitHub.com/ZigRazor/Chihuahua/releases/) [![CMake](https://github.com/ZigRazor/Chihuahua/actions/workflows/cmake.yml/badge.svg)](https://github.com/ZigRazor/Chihuahua/actions/workflows/cmake.yml) 

[![codecov](https://codecov.io/gh/ZigRazor/Chihuahua/graph/badge.svg?token=24SM5HBW6C)](https://codecov.io/gh/ZigRazor/Chihuahua) [![CodeFactor](https://www.codefactor.io/repository/github/zigrazor/chihuahua/badge)](https://www.codefactor.io/repository/github/zigrazor/chihuahua)

[![Generic badge](https://img.shields.io/badge/required-C++20-Green.svg)](https://shields.io/) [![Generic badge](https://img.shields.io/badge/Required-CMake3.16-Green.svg)](https://shields.io/)

## Table of Contents
- [Description](#description)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)
- [Acknowledgements](#acknowledgements)

## Description

Chihuahua is a C++ Unique Identifier Utilities Library. This project aims to fulfill a framework for manage Unique Identifier. By using Chihuahua, users can:
- Create Unique Identifier

## Features

- UniqueId Class
- UniqueIdGenerator Singleton

## Installation

To install and set up Chihuahua, follow these steps:

1. **Clone the repository:**
   ```bash
   git clone https://github.com/ZigRazor/Chihuahua.git
   ```
2. **Navigate to the project directory:**
  ```bash
  cd Chihuahua
  ```
3. **Prepare CMake:**
  ```bash
  mkdir build
  cd build
  cmake ..
 ```
4. **Install Library**
   ```bash
   make install
   ```
     
## Usage

You can use the Library in your project with CMake adding the following lines:

```cmake
CPMAddPackage(
    NAME Chihuahua
    GITHUB_REPOSITORY ZigRazor/Chihuahua
    GIT_TAG origin/main
)
```
or install it and the add to the include path *{StandardIncludePath}/DogBreeds/Chihuahua* and to the linking_path *{StandardLinkingPath}/DogBreeds/Chihuahua*. 

For simple use you can see the [Example](https://github.com/ZigRazor/Chihuahua/tree/main/example)
For more detailed usage instructions, refer to the documentation.

## Contributing
We welcome contributions to Chihuahua! To contribute, follow these steps:

1. **Fork the repository.**
2. **Create a new branch:**
  ```bash
  git checkout -b feature/your-feature-name
  ```
3. **Make your changes and commit them:**
  ```bash
  git commit -m "Add your commit message"
  ```
4. **Push to the branch:**
  ```bash
  git push origin feature/your-feature-name
  ```
5. **Create a pull request.**

Please read our [contributing guidelines](https://github.com/ZigRazor/Chihuahua/blob/main/CONTRIBUTING.md) for more details.

## License
This project is licensed under the MIT License. See the [LICENSE](https://github.com/ZigRazor/Chihuahua/blob/main/LICENSE) file for details.

## Contact
If you have any questions, suggestions, or feedback, feel free to reach out:

- Email: zigrazor@gmail.com
- GitHub Issues: [issues](https://github.com/ZigRazor/Chihuahua/issues)

## Acknowledgements
We would like to thank the following individuals for their support:

[![Contributors](https://contrib.rocks/image?repo=zigrazor/Chihuahua)](https://github.com/ZigRazor/Chihuahua/graphs/contributors) 

## Credits

Photo of <a href="https://unsplash.com/@jairoalzate?utm_content=creditCopyText&utm_medium=referral&utm_source=unsplash">Jairo Alzate</a> on <a href="https://unsplash.com/photos/white-and-brown-chihuahua-puppy-J4QoIMyTPmA?utm_content=creditCopyText&utm_medium=referral&utm_source=unsplash">Unsplash</a>
  
