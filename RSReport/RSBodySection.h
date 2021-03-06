//
//  RSBodySection.h
//  RSReport
//
//  Created by Roberto Scarciello on 16/08/11.
//  Copyright 2011 Roberto Scarciello. All rights reserved.
//

#import "RSSection.h"
#import "RSReportDelegate.h"

@interface RSBodySection : RSSection {
    NSInteger _currentRow;
}

@property (nonatomic, assign) BOOL easyReading;
@property (nonatomic, strong) UIColor *easyReadingColor;
@end
