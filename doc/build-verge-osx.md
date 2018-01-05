### Building Mac OS X Wallet

> **Note:** This has only been confirmed to work on OS X Sierra (10.12) and OS X High Sierra (10.13) with XCode 9.2 and `Apple LLVM version 9.0.0 (clang-900.0.39.2)`.

1. Ensure you have mysql and boost installed.
    
    ```shell
    brew install mysql boost
    ```

2. Ensure you have python 2.7 installed and in your path (OS X comes with this by default)

    ```shell
    python --version
    ```

3. Export the required environment variables

    ```shell
    export VERGE_PLATFORM='mac'
    export CXX=clang++
    export CC=clang
    ```

4. Run your build commands

    ```shell
    ./building/common.sh
    ./building/mac/requirements.sh
    ./building/mac/build.sh
    ```

5. Grab a :coffee: and wait it out

6. Create the `.dmg` file

    ```shell
    ./building/mac/dist.sh
    ```

