//
//  FileUnit.h
//  ZTAdditionsDemo
//
//  Created by ShaoFeng on 2017/2/9.
//  Copyright © 2017年 ShaoFeng. All rights reserved.
//

/*
 文件路径相关的方法:
 stringByDeletingLastPathComponent  //删除最后一个路径节点元素
 stringByAppendingPathComponent     //添加一个路径元素
 stringByAppendingPathComponent     //文件的后缀名
 stringByDeletingPathExtension      //去掉后缀名
 stringByAppendingPathExtension     //添加后缀名
 stringByAbbreviatingWithTildeInPath//变成相对路径,前面的都用波浪号省略
 stringByExpandingTildeInPath]      //把相对路径变成绝对路径
 stringsByAppendingPaths            //批量添加多个路径,得到一个路径数组
 */

#import <Foundation/Foundation.h>

@interface FileUnit : NSObject

/**
 获取Document路径
 */
+ (NSString *)getDocumentPath;

/**
 获取Library路径
 */
+ (NSString *)getLibraryPath;

/**
 获取应用程序路径
 */
+ (NSString *)getApplicationPath;

/**
 获取Cache路径
 */
+ (NSString *)getCachePath;

/**
 获取Temp路径
 */
+ (NSString *)getTempPath;

/**
 判断文件是否存在于某个路径中
 */
+ (BOOL)fileIsExistOfPath:(NSString *)filePath;

/**
 从某个路径中移除文件
 */
+ (BOOL)removeFileOfPath:(NSString *)filePath;

/**
 从URL路径中移除文件
 */
- (BOOL)removeFileOfURL:(NSURL *)fileURL;

/**
 创建文件路径
 */
+(BOOL)creatDirectoryWithPath:(NSString *)dirPath;

/**
 创建文件
 */
+ (BOOL)creatFileWithPath:(NSString *)filePath;

/**
 保存文件
 */
+ (BOOL)saveFile:(NSString *)filePath withData:(NSData *)data;

/**
 追加写文件
 */
+ (BOOL)appendData:(NSData *)data withPath:(NSString *)path;

/**
 获取文件
 */
+ (NSData *)getFileData:(NSString *)filePath;

/**
 读取文件
 */
+ (NSData *)getFileData:(NSString *)filePath startIndex:(long long)startIndex length:(NSInteger)length;

/**
 移动文件
 */
+ (BOOL)moveFileFromPath:(NSString *)filePath toPath:(NSString *)filePath;
@end