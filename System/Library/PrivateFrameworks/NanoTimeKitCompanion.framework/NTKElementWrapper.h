/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:37:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REElement;

@interface NTKElementWrapper : NSObject {

	REElement* _element;

}

@property (nonatomic,retain) REElement * element;              //@synthesize element=_element - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(REElement *)element;
-(void)setElement:(REElement *)arg1 ;
-(id)initWithElement:(id)arg1 ;
@end
