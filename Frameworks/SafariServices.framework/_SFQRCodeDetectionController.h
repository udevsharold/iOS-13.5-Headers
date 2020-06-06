/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BCSAction;
@class BCSQRCodeParser, NSMutableSet;

@interface _SFQRCodeDetectionController : NSObject {

	BCSQRCodeParser* _QRCodeParser;
	id<BCSAction> _lastDetectedAction;
	NSMutableSet* _cachedElements;

}
+(id)sharedController;
-(id)init;
-(void)clearCachedElement:(id)arg1 ;
-(id)menuElementsForElementInfo:(id)arg1 ;
-(id)actionForElement:(id)arg1 ;
-(void)cacheElement:(id)arg1 ;
-(id)adjustedCopyActionForAction:(id)arg1 elementInfo:(id)arg2 ;
-(void)getActionForImage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)getActionForImageSynchronously:(id)arg1 userInfo:(id*)arg2 ;
-(id)elementForAction:(id)arg1 ;
@end

