/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSMutableSet;

@interface _NSXPCConnectionClassCache : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableSet* _cache;

}
-(id)init;
-(void)dealloc;
-(void)clear;
-(BOOL)containsClass:(Class)arg1 ;
-(void)addClass:(Class)arg1 ;
@end

