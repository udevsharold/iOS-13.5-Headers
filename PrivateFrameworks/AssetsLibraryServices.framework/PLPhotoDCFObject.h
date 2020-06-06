/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@class NSString;

@interface PLPhotoDCFObject : NSObject {

	NSString* _name;
	int _number;

}
+(id)validDCFNameForName:(id)arg1 requiredLength:(int)arg2 nameLength:(int)arg3 number:(int*)arg4 numberRange:(NSRange)arg5 suffix:(id)arg6 ;
-(id)description;
-(id)name;
-(long long)compare:(id)arg1 ;
-(int)number;
-(void)setWriteIsPending:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 number:(int)arg2 ;
@end

