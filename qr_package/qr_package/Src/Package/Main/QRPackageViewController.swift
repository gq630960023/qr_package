//
//  QRPackageViewController.swift
//  qr_package
//
//  Created by 郭琦 on 2017/3/27.
//  Copyright © 2017年 xiawan. All rights reserved.
//

import UIKit


class QRPackageViewController: QRBaseViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

        let view = UIView()
        view.backgroundColor = UIColor.red
        self.view.addSubview(view)
        
        view.snp.makeConstraints { (make) in
            make.centerX.equalToSuperview()
            make.centerY.equalToSuperview()
            make.width.height.equalTo(100)
        }
        
    }


}
