//
//  QRDefine.swift
//  qr_package
//
//  Created by 郭琦 on 2017/3/27.
//  Copyright © 2017年 xiawan. All rights reserved.
//

import Foundation


/// 多国语言
///
/// - Parameter string: 文本标识
/// - Returns: 实际内容
func QRLocalized(string: String) -> String {
    return NSLocalizedString(string, comment: string)
}

