/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSString, NSDictionary;

@interface IKPlayerTransportBarVisibilityDidChangeEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	BOOL _hidden;

}

@property (nonatomic,readonly) BOOL hidden;                            //@synthesize hidden=_hidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(NSDictionary *)properties;
-(BOOL)hidden;
-(id)initWithHidden:(BOOL)arg1 ;
@end

