//
//  AppDelegate.swift
//  qr_package
//
//  Created by 郭琦 on 2017/3/24.
//  Copyright © 2017年 xiawan. All rights reserved.
//

import UIKit
import ESTabBarController

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    
    var window: UIWindow?
    
    
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplicationLaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        
        let vc = MainViewController()
        
        window = UIWindow.init(frame: UIScreen.main.bounds)
        window?.rootViewController = vc;
        window?.makeKeyAndVisible();
        
        return true
    }
    
    func applicationWillResignActive(_ application: UIApplication) {
        // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
        // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
    }
    
    func applicationDidEnterBackground(_ application: UIApplication) {
        // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
        // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
    }
    
    func applicationWillEnterForeground(_ application: UIApplication) {
        // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
    }
    
    func applicationDidBecomeActive(_ application: UIApplication) {
        // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
    }
    
    func applicationWillTerminate(_ application: UIApplication) {
        // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
    }
    
    
    //MARK:UI
    
    /// 获取主界面
    ///
    /// - Returns: 主界面
    func MainViewController() -> ESTabBarController {
        
        let vc = ESTabBarController()
        
        let v1 = QRPackageViewController()
        let v2 = QRScanViewController()
        let v3 = QROtherViewController()
        
        v1.tabBarItem = ESTabBarItem.init(title: "口袋", image: nil, selectedImage: nil, tag: 1)
        v2.tabBarItem = ESTabBarItem.init(title: "扫描", image: nil, selectedImage: nil, tag: 2)
        v3.tabBarItem = ESTabBarItem.init(title: "其他", image: nil, selectedImage: nil, tag: 3)
        
        v1.title = "口袋"
        v2.title = "扫描"
        v3.title = "其他"
        
        let n1 = QRBaseNavigationController.init(rootViewController: v1)
        let n2 = QRBaseNavigationController.init(rootViewController: v2)
        let n3 = QRBaseNavigationController.init(rootViewController: v3)
        
        vc.viewControllers = [n1, n2, n3]
        
        return vc;
        
    }
    
    
}

