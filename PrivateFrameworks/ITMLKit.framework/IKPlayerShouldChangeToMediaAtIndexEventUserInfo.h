/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKPlayerEventMarshaling.h>

@class NSString, NSDictionary;

@interface IKPlayerShouldChangeToMediaAtIndexEventUserInfo : NSObject <IKPlayerEventMarshaling> {

	BOOL _shouldChange;
	long long _index;

}

@property (nonatomic,readonly) long long index;                        //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) BOOL shouldChange;                      //@synthesize shouldChange=_shouldChange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(long long)index;
-(id)initWithIndex:(long long)arg1 ;
-(NSDictionary *)properties;
-(void)processReturnJSValue:(id)arg1 inContext:(id)arg2 ;
-(BOOL)expectsReturnValue;
-(BOOL)shouldChange;
@end

