/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CCUIPPTTest : NSObject <NSCopying> {

	NSString* _name;
	unsigned long long _beginSignpost;
	unsigned long long _endSignpost;

}

@property (nonatomic,copy,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long beginSignpost;              //@synthesize beginSignpost=_beginSignpost - In the implementation block
@property (nonatomic,readonly) unsigned long long endSignpost;                //@synthesize endSignpost=_endSignpost - In the implementation block
+(id)testWithName:(id)arg1 beginSignpost:(unsigned long long)arg2 endSignpost:(unsigned long long)arg3 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)beginSignpost;
-(unsigned long long)endSignpost;
-(id)_initWithName:(id)arg1 beginSignpost:(unsigned long long)arg2 endSignpost:(unsigned long long)arg3 ;
@end

