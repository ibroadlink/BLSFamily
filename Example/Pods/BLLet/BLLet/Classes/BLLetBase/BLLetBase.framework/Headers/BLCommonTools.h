//
//  CommonTools.h
//  Let
//
//  Created by yzm on 16/5/16.
//  Copyright © 2016年 BroadLink Co., Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface BLCommonTools : NSObject

/**
 *  获取当前手机时间
 *
 *  @return 当前手机时间
 */
+ (NSString*)getCurrentTimes;

/**
 *  获取当前系统语言
 *
 *  @return 当前系统语言
 */
+ (NSString *)getCurrentLanguage;

/**
 *  将十六进制字符串转换成二进制数据
 *
 *  @param hexStr 待转换的16进制字符串
 *
 *  @return 转换成功则返回二进制数据，失败返回nil
 */
+ (NSData *)hexString2Bytes:(NSString *)hexStr;

/**
 *  将NSData 转化为十六进制字符串
 *
 *  @param data 待转化数据
 *
 *  @return 转化成功返回字符串
 */
+ (NSString *)data2hexString:(NSData *)data;

/**
 *  判断输入内容是否是合法的email格式
 *
 *  @param email 判断的内容
 *
 *  @return YES / NO
 */
+ (Boolean)isEmail:(NSString *)email;

/**
 *  判断输入内容是否是合法的手机号码格式
 *
 *  @param number 判断内容
 *
 *  @return YES / NO
 */
+ (Boolean)isPhoneNumber:(NSString *)number;

/**
 *  计算输入内容的SHA1
 *
 *  @param string 计算内容
 *
 *  @return SHA1结果 <16进制字符串格式>
 */
+ (NSString *)sha1:(NSString *)string;

/**
 *  计算输入内容的SHA256
 *
 *  @param string 计算内容
 *
 *  @return SHA256结果 <16进制字符串格式>
 */
+ (NSString *)sha256:(NSString *)string;

/**
 *  计算输入内容的md5
 *
 *  @param string 计算内容
 *
 *  @return MD5结果 <16进制字符串格式>
 */
+ (NSString *)md5:(NSString *)string;

/**
 *  AES/CBC/ZeroBytePadding加密, 固定IV, Key
 *
 *  @param dataStr 加密数据
 *
 *  @return 加密结果
 */
+ (NSData *)aes128NoPadding:(NSString *)dataStr;
/**
 *  AES/CBC/ZeroBytePadding加密, 固定IV
 *
 *  @param dataStr 加密数据
 *  @param key     加密秘钥
 *
 *  @return 加密结果
 */
+ (NSData *)aes128NoPadding:(NSString *)dataStr key:(NSData *)key;

/**
 *  AES/CBC/ZeroBytePadding加密
 *
 *  @param dataStr 加密数据
 *  @param key     加密秘钥
 *  @param iv      偏移量
 *
 *  @return 加密结果
 */
+ (NSData *)aes128NoPadding:(NSString *)dataStr key:(NSData *)key iv:(NSData *)iv;

/**
 AES/CBC/ZeroBytePadding加密

 @param data 加密数据
 @param key 加密秘钥
 @param iv 偏移量
 @return 加密结果
 */
+ (NSData *)aes128NoPaddingWithData:(NSData *)data key:(NSData *)key iv:(NSData *)iv;

/**
 AES128 解密, 固定IV, Key
 
 @param data 解密数据
 @return 解密结果
 */
+ (NSData *)aes128DecryptData:(NSData *)data;
/**
 AES128 解密

 @param data 解密数据
 @param key 加密密钥
 @param iv 偏移量
 @return 解密结果
 */
+ (NSData *)aes128DecryptData:(NSData *)data WithKey:(uint8_t *)key iv:(uint8_t *)iv;

//是否为空字符串
+ (BOOL)isEmpty:(NSString *)str;

// 处理空字符串
+ (NSString *)convertNullOrNil:(NSString *)str;

// 序列化JSON
+ (NSString *)serializeMessage:(id)message;

// 反序列化JSON
+ (id)deserializeMessageJSON:(NSString *)messageJSON;

// 截取URL中的参数
+ (NSMutableDictionary *)getURLParameters:(NSString *)UrlStr;

//是否为空数组
+ (BOOL)isEmptyArray:(NSArray *)array;

//是否为空字典
+ (BOOL)isEmptyDic:(NSDictionary *)dic;

//图片裁剪，限制大小
+ (NSData *)convertToDataWithimage:(UIImage *)image MaxLimit:(NSNumber *)maxLimitDataSize;

// 带block的NSTimer
+ (NSTimer *)bl_socheduledTimerWithTimeInterval:(NSTimeInterval)interval block:(void(^)(void))block repeats:(BOOL)repeats;

/**
 从传入的设备DeviceId里获取设备的Did

 @param deviceId 设备DeviceId
 @return 设备的Did
 */
+ (NSString *)getDeviceDidWith:(NSString *)deviceId;

//当前时间字符串转为时间戳
+ (NSTimeInterval )currentTimeStamapFromLocalString:(NSString *)localString;

//设备时间字符串转为时间戳
+ (NSTimeInterval )deviceTimeStamapFromLocalString:(NSString *)localString;

// 判断是否是同一天
+ (NSInteger)isSameDay:(NSDate *)date1 date2:(NSDate *)date2;

//定时周期转换
+ (NSArray *)getNewWeeks:(NSArray *)weekArray diffDay:(NSInteger)diffDay;

@end
