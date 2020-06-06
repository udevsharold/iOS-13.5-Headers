/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCGestureFinger : NSObject {

	unsigned long long _identifier;
	CGPoint _location;
	double _pressure;

}
-(id)description;
-(long long)type;
-(unsigned long long)identifier;
-(CGPoint)location;
-(double)pressure;
-(id)initWithIdentifier:(unsigned long long)arg1 location:(CGPoint)arg2 pressure:(double)arg3 ;
@end

