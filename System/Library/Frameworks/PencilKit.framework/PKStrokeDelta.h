/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PencilKit/PencilKit-Structs.h>
@class PKStroke, _PKStrokeData, NSUUID;

@interface PKStrokeDelta : NSObject {

	PKStroke* _deltaStroke;
	_PKStrokeData* _deltaStrokeData;
	NSUUID* _strokeUUID;

}

@property (nonatomic,retain) PKStroke * deltaStroke;                       //@synthesize deltaStroke=_deltaStroke - In the implementation block
@property (nonatomic,retain) _PKStrokeData * deltaStrokeData;              //@synthesize deltaStrokeData=_deltaStrokeData - In the implementation block
@property (nonatomic,retain) NSUUID * _strokeUUID;                         //@synthesize strokeUUID=_strokeUUID - In the implementation block
-(id)description;
-(id)dataRepresentation;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)initWithArchive:(const StrokeDelta*)arg1 error:(id*)arg2 ;
-(void)saveToArchive:(StrokeDelta*)arg1 ;
-(NSUUID *)_strokeUUID;
-(PKStroke *)deltaStroke;
-(_PKStrokeData *)deltaStrokeData;
-(void)setDeltaStroke:(PKStroke *)arg1 ;
-(void)setDeltaStrokeData:(_PKStrokeData *)arg1 ;
-(void)set_strokeUUID:(NSUUID *)arg1 ;
@end

