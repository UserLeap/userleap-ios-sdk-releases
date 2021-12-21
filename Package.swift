mport PackageDescription
let package = Package(
    name: "UserLeapKit",
    platforms: [
        .iOS(.v10_3)
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
    
