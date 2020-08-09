/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolPageFrame : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * loaderId; 
@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * securityOrigin; 
@property (nonatomic,copy) NSString * mimeType; 
@property (nonatomic,copy) NSString * parentId; 
@property (nonatomic,copy) NSString * name; 
+(id)safe_initWithIdentifier:(id)arg1 loaderId:(id)arg2 url:(id)arg3 securityOrigin:(id)arg4 mimeType:(id)arg5 ;
+(id)ik_globalFrame;
+(id)ik_pageFrameFromDOMDocument:(id)arg1 ;
-(id)ik_resourceTreeWithResources:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)securityOrigin;
-(void)setParentId:(NSString *)arg1 ;
-(NSString *)parentId;
-(void)setSecurityOrigin:(NSString *)arg1 ;
-(void)setLoaderId:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 loaderId:(id)arg2 url:(id)arg3 securityOrigin:(id)arg4 mimeType:(id)arg5 ;
-(NSString *)loaderId;
@end
