/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDOMStorageStorageId : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * securityOrigin; 
@property (assign,nonatomic) BOOL isLocalStorage; 
+(id)safe_initWithSecurityOrigin:(id)arg1 isLocalStorage:(BOOL)arg2 ;
-(NSString *)securityOrigin;
-(BOOL)isLocalStorage;
-(void)setSecurityOrigin:(NSString *)arg1 ;
-(void)setIsLocalStorage:(BOOL)arg1 ;
-(id)initWithSecurityOrigin:(id)arg1 isLocalStorage:(BOOL)arg2 ;
@end
