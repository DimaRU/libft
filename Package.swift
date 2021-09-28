// swift-tools-version:5.4

import PackageDescription

let package = Package(
    name: "libft",
    products: [
		.library(name: "libft", type: .static, targets: ["libft"]),
    ],
    targets: [
		.target( name: "libft", path: "", exclude: ["Makefile"], sources: ["source"], publicHeadersPath: "include"),
    ]
)
