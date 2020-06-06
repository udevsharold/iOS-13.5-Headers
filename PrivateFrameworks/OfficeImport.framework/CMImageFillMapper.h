/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class OADFill;

@interface CMImageFillMapper : CMMapper {

	OADFill* mFill;
	CGRect mBounds;

}
-(BOOL)isCropped;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)blipAtIndex:(unsigned)arg1 ;
-(CGRect)uncroppedBox;
-(id)mainSubBlip;
-(id)mapImageFill:(id)arg1 withState:(id)arg2 ;
-(id)convertMetafileToPdf:(id)arg1 state:(id)arg2 ;
-(id)initWithOadFill:(id)arg1 bounds:(CGRect)arg2 parent:(id)arg3 ;
-(void)mapImageFillAt:(id)arg1 toStyle:(id)arg2 withState:(id)arg3 ;
-(void)mapNonImageFillAt:(id)arg1 toStyle:(id)arg2 withState:(id)arg3 ;
@end

