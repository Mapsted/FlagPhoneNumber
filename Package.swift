// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "FlagPhoneNumber",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "FlagPhoneNumber",
            targets: ["FlagPhoneNumber"]),
    ],
    dependencies: [
    ],
    targets: [
        .binaryTarget(
            name: "FlagPhoneNumber",
            path: "FlagPhoneNumber.xcframework"
        )
    ]
)
