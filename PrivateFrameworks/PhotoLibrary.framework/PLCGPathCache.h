/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibrary/PhotoLibrary-Structs.h>
@interface PLCGPathCache : NSObject {

	CFDictionaryRef _pathCache;

}
+(id)sharedPathCache;
-(id)init;
-(void)dealloc;
-(void)setPath:(CGPathRef)arg1 forKey:(CGRect)arg2 ;
-(CGPathRef)pathForKey:(CGRect)arg1 ;
@end

