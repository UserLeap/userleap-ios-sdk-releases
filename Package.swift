// swift-tools-version:5.7
import PackageDescription
let package = Package(
    name: "UserLeapKit",
    platforms: [
        .iOS("10.3")
    ],
    products: [
        .library(
            name: "UserLeapKit",
            targets: ["UserLeapKit"])
    ],
    targets: [
        .binaryTarget(
            name: "UserLeapKit",
            path: "UserLeapKit.xcframework")
    ])
    
