load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
    name = "com_github_nelhage_rules_boost",
    commit = "9f9fb8b2f0213989247c9d5c0e814a8451d18d7f",
    remote = "https://github.com/nelhage/rules_boost",
    shallow_since = "1570056263 -0700",
)

load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")

boost_deps()

# .deb building bits
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "rules_pkg",
    sha256 = "4ba8f4ab0ff85f2484287ab06c0d871dcb31cc54d439457d28fd4ae14b18450a",
    url = "https://github.com/bazelbuild/rules_pkg/releases/download/0.2.4/rules_pkg-0.2.4.tar.gz",
)

load("@rules_pkg//:deps.bzl", "rules_pkg_dependencies")

rules_pkg_dependencies()

# Pybind11
http_archive(
    name = "pybind11_bazel",
    sha256 = "75922da3a1bdb417d820398eb03d4e9bd067c4905a4246d35a44c01d62154d91",
    strip_prefix = "pybind11_bazel-203508e14aab7309892a1c5f7dd05debda22d9a5",
    urls = ["https://github.com/pybind/pybind11_bazel/archive/203508e.zip"],
)

http_archive(
    name = "pybind11",
    build_file = "@pybind11_bazel//:pybind11.BUILD",
    sha256 = "d475978da0cdc2d43b73f30910786759d593a9d8ee05b1b6846d1eb16c6d2e0c",
    strip_prefix = "pybind11-2.11.1",
    urls = ["https://github.com/pybind/pybind11/archive/v2.11.1.tar.gz"],
)

load("@pybind11_bazel//:python_configure.bzl", "python_configure")

python_configure(
    name = "local_config_python",
)

# Experimental python rules
git_repository(
    name = "rules_python",
    commit = "cd552725122fdfe06a72864e21a92b5093a1857d",
    remote = "https://github.com/bazelbuild/rules_python.git",
    shallow_since = "1593046824 -0700",
)

# GTest
git_repository(
    name = "gtest",
    commit = "6a7ed316a5cdc07b6d26362c90770787513822d4",
    remote = "https://github.com/google/googletest",
    shallow_since = "1583246693 -0500",
)

# LZ4
http_archive(
    name = "liblz4",
    build_file = "@//lz4:BUILD",
    sha256 = "658ba6191fa44c92280d4aa2c271b0f4fbc0e34d249578dd05e50e76d0e5efcc",
    strip_prefix = "lz4-1.9.2",
    urls = ["https://github.com/lz4/lz4/archive/v1.9.2.tar.gz"],
)

# Bz2
http_archive(
    name = "libbz2",
    build_file = "@//bz2:BUILD",
    sha256 = "ab5a03176ee106d3f0fa90e381da478ddae405918153cca248e682cd0c4a2269",
    strip_prefix = "bzip2-1.0.8",
    urls = ["https://sourceware.org/pub/bzip2/bzip2-1.0.8.tar.gz"],
)
