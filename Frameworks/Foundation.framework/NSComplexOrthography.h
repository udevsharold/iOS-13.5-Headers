/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOrthography.h>

@class NSString, NSDictionary;

@interface NSComplexOrthography : NSOrthography {

	NSString* _dominantScript;
	NSDictionary* _languageMap;
	unsigned _orthographyFlags;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithDominantScript:(id)arg1 languageMap:(id)arg2 ;
-(unsigned)orthographyFlags;
-(id)dominantScript;
-(id)languageMap;
@end

