/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TIMecabraSegment : NSObject {

	NSString* _reading;
	NSString* _surface;

}

@property (nonatomic,retain) NSString * reading;              //@synthesize reading=_reading - In the implementation block
@property (nonatomic,retain) NSString * surface;              //@synthesize surface=_surface - In the implementation block
+(void)splitSegments:(id)arg1 at:(int)arg2 forPrefix:(id*)arg3 forSuffix:(id*)arg4 ;
-(NSString *)surface;
-(void)setReading:(NSString *)arg1 ;
-(NSString *)reading;
-(void)setSurface:(NSString *)arg1 ;
@end

