//
//  WChatSDK+ChatRoom.h
//  ChatPlusSDK
//
//  Created by Frederic on 16/6/23.
//  Copyright © 2016年 YouYun. All rights reserved.
//

#import "WChatSDK.h"

@interface WChatSDK (ChatRoom)

#pragma mark - 聊天室 - 管理相关接口

/**
 *  创建聊天室群租
 *
 *  @param name    聊天室、群组名称
 *  @param cat     群组类别
 *  @param handler 回调结果
 */
- (void)chatRoomCreateName:(NSString *)name
                  categary:(WChatGroupCategary)cat
                completion:(void (^)(NSDictionary *response, NSError *err))handler;
/**
 *  删除聊天室房间
 *
 *  @param roomid  聊天室房间ID
 *  @param handler 回调个结果
 */
- (void)chatRoomDelete:(NSString *)roomid
            completion:(void (^)(BOOL success, NSError *err))handler;

/**
 *  进入聊天室房间
 *
 *  @param roomid  聊天室房间ID
 *  @param handler 回调block (是否操作成功, 如果错误则返回错误信息)
 */
- (void)chatRoomEnter:(NSString *)roomid
           completion:(void(^)(BOOL isEnter, NSError *err))handler;

/**
 *  退出聊天室房间
 *
 *  @param roomid  聊天室房间ID
 *  @param handler 回调block (是否操作成功, 如果错误则返回错误信息)
 */
- (void)chatRoomExit:(NSString *)roomid
          completion:(void(^)(BOOL isExit, NSError *err))handler;

/**
 *  查询聊天室成员列表
 *
 *  @param roomid  聊天室房间ID
 *  @param handler 回调结果
 */
- (void)chatRoomGetMembers:(NSString *)roomid
                completion:(void (^)(NSDictionary *response, NSError *err))handler;

/**
 *  查询某用户是否在聊天室房间内
 *
 *  @param uid     游云成员ID
 *  @param roomid  聊天室房间ID
 *  @param handler 回调结果
 */
- (void)chatRoomCheckUser:(NSString *)uid
                   roomid:(NSString *)roomid
               completion:(void (^)(BOOL success, NSError *err))handler;

/**
 *  禁言/解禁某聊天室内某成员
 *
 *  @param uids      游云成员ID列表
 *  @param roomid    聊天室房间ID
 *  @param isForbid  1：禁言，0：解禁言
 *  @param handler   回调结果
 */
- (void)chatRoomForbidUser:(NSArray *)uids
                    roomid:(NSString *)roomid
                    forbid:(int)isForbid
                completion:(void (^)(BOOL success, NSError *err))handler;

/**
 *  获取当前用户所加入的聊天室列表(Demo使用)
 *
 *  @param handler 回调结果
 */
- (void)chatRoomGetListCompletion:(void (^)(NSDictionary *response, NSError *err))handler;


@end
