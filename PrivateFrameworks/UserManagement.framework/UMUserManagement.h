/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UMUser;


@protocol UMUserManagement <NSObject>
@property (nonatomic,readonly) BOOL isMultiUser; 
@property (nonatomic,copy,readonly) UMUser * currentUser; 
@property (nonatomic,copy,readonly) UMUser * loginUser; 
@property (nonatomic,readonly) BOOL isLoginSession; 
@property (nonatomic,readonly) unsigned long long maxNumberOfUsers; 
@property (nonatomic,readonly) unsigned long long userQuotaSize; 
@required
-(BOOL)isMultiUser;
-(UMUser *)currentUser;
-(void)disableUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned long long)maxNumberOfUsers;
-(unsigned long long)userQuotaSize;
-(UMUser *)loginUser;
-(BOOL)isLoginSession;
-(BOOL)canAccessUserProperties;
-(void)createUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)loadUser:(id)arg1 passcodeData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)deleteUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)registerUserListUpdateObserver:(id)arg1;

@end

