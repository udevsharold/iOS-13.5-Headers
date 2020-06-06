/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ARLine : NSObject <NSCopying> {

	unsigned long long _identifier;
	 _startPoint;
	 _endPoint;

}

@property (assign,nonatomic) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic)  startPoint;                                //@synthesize startPoint=_startPoint - In the implementation block
@property (assign,nonatomic)  endPoint;                                  //@synthesize endPoint=_endPoint - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)identifier;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(void)setStartPoint:;
-(void)setEndPoint:;
-()startPoint;
-()endPoint;
@end

