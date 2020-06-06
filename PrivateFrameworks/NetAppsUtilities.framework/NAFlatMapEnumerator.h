/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator;

@interface NAFlatMapEnumerator : NSEnumerator {

	NSEnumerator* _enumerator;
	/*^block*/id _map;

}

@property (nonatomic,readonly) NSEnumerator * enumerator;              //@synthesize enumerator=_enumerator - In the implementation block
@property (nonatomic,copy,readonly) id map;                            //@synthesize map=_map - In the implementation block
-(id)nextObject;
-(id)allObjects;
-(id)map;
-(NSEnumerator *)enumerator;
-(id)initWithEnumerator:(id)arg1 map:(/*^block*/id)arg2 ;
@end

